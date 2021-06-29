import Foundation

struct pos {
    var x: Int
    var y: Int
}
func cul(_ a: Int,_ b: Int) -> Int{
    return a>b ? a-b : b-a
}
func solution(_ numbers:[Int], _ hand:String) -> String {
    var result: String = ""
    var LC: pos = pos(x:0, y:3)
    var RC: pos = pos(x:2, y:3)
    
    for num in numbers {
        switch num {
        case 1,4,7 :
            result += "L"
            LC = pos(x: 0, y: num/3)
        case 3,6,9 :
            result += "R"
            RC = pos(x: 2, y: num/3-1)
        default :
            var numPos: pos
            if num == 2 {
                numPos = pos(x: 1, y: 0)
            }else if num == 5 {
                numPos = pos(x: 1, y: 1)
            }else if num == 8 {
                numPos = pos(x: 1, y: 2)
            }else{
                numPos = pos(x: 1, y: 3)
            }
            print("num = \(num)")
            print("numPos = \(numPos)")
            print("LC = \(LC)")
            print("RC = \(RC)")
            
            let LD = cul(numPos.x, LC.x) + cul(numPos.y, LC.y)
            let RD = cul(numPos.x, RC.x) + cul(numPos.y, RC.y)
            print("LD = \(LD)")
            print("RD = \(RD)\n\n\n")
            if LD < RD {
                result += "L"
                LC = numPos
            }else if LD > RD {
                result += "R"
                RC = numPos
            }else{
                if hand == "right" {
                    RC = numPos
                    result += "R"
                }else {
                    LC = numPos
                    result += "L"
                }
            }
        }
    }
    return result
}
