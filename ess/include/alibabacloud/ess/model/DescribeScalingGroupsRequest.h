/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingGroupsRequest : public RpcServiceRequest
			{

			public:
				DescribeScalingGroupsRequest();
				~DescribeScalingGroupsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getScalingGroupId10()const;
				void setScalingGroupId10(const std::string& scalingGroupId10);
				std::string getScalingGroupId12()const;
				void setScalingGroupId12(const std::string& scalingGroupId12);
				std::string getScalingGroupId13()const;
				void setScalingGroupId13(const std::string& scalingGroupId13);
				std::string getScalingGroupId14()const;
				void setScalingGroupId14(const std::string& scalingGroupId14);
				std::string getScalingGroupId15()const;
				void setScalingGroupId15(const std::string& scalingGroupId15);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getScalingGroupName20()const;
				void setScalingGroupName20(const std::string& scalingGroupName20);
				std::string getScalingGroupName19()const;
				void setScalingGroupName19(const std::string& scalingGroupName19);
				std::string getScalingGroupId20()const;
				void setScalingGroupId20(const std::string& scalingGroupId20);
				std::string getScalingGroupName18()const;
				void setScalingGroupName18(const std::string& scalingGroupName18);
				std::string getScalingGroupName17()const;
				void setScalingGroupName17(const std::string& scalingGroupName17);
				std::string getScalingGroupName16()const;
				void setScalingGroupName16(const std::string& scalingGroupName16);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScalingGroupName()const;
				void setScalingGroupName(const std::string& scalingGroupName);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getScalingGroupName1()const;
				void setScalingGroupName1(const std::string& scalingGroupName1);
				std::string getScalingGroupName2()const;
				void setScalingGroupName2(const std::string& scalingGroupName2);
				std::string getScalingGroupId2()const;
				void setScalingGroupId2(const std::string& scalingGroupId2);
				std::string getScalingGroupId1()const;
				void setScalingGroupId1(const std::string& scalingGroupId1);
				std::string getScalingGroupId6()const;
				void setScalingGroupId6(const std::string& scalingGroupId6);
				std::string getScalingGroupId16()const;
				void setScalingGroupId16(const std::string& scalingGroupId16);
				std::string getScalingGroupName7()const;
				void setScalingGroupName7(const std::string& scalingGroupName7);
				std::string getScalingGroupName11()const;
				void setScalingGroupName11(const std::string& scalingGroupName11);
				std::string getScalingGroupId5()const;
				void setScalingGroupId5(const std::string& scalingGroupId5);
				std::string getScalingGroupId17()const;
				void setScalingGroupId17(const std::string& scalingGroupId17);
				std::string getScalingGroupName8()const;
				void setScalingGroupName8(const std::string& scalingGroupName8);
				std::string getScalingGroupName10()const;
				void setScalingGroupName10(const std::string& scalingGroupName10);
				std::string getScalingGroupId4()const;
				void setScalingGroupId4(const std::string& scalingGroupId4);
				std::string getScalingGroupId18()const;
				void setScalingGroupId18(const std::string& scalingGroupId18);
				std::string getScalingGroupName9()const;
				void setScalingGroupName9(const std::string& scalingGroupName9);
				std::string getScalingGroupId3()const;
				void setScalingGroupId3(const std::string& scalingGroupId3);
				std::string getScalingGroupId19()const;
				void setScalingGroupId19(const std::string& scalingGroupId19);
				std::string getScalingGroupName3()const;
				void setScalingGroupName3(const std::string& scalingGroupName3);
				std::string getScalingGroupName15()const;
				void setScalingGroupName15(const std::string& scalingGroupName15);
				std::string getScalingGroupId9()const;
				void setScalingGroupId9(const std::string& scalingGroupId9);
				std::string getScalingGroupName4()const;
				void setScalingGroupName4(const std::string& scalingGroupName4);
				std::string getScalingGroupName14()const;
				void setScalingGroupName14(const std::string& scalingGroupName14);
				std::string getScalingGroupId8()const;
				void setScalingGroupId8(const std::string& scalingGroupId8);
				std::string getScalingGroupName5()const;
				void setScalingGroupName5(const std::string& scalingGroupName5);
				std::string getScalingGroupName13()const;
				void setScalingGroupName13(const std::string& scalingGroupName13);
				std::string getScalingGroupId7()const;
				void setScalingGroupId7(const std::string& scalingGroupId7);
				std::string getScalingGroupName6()const;
				void setScalingGroupName6(const std::string& scalingGroupName6);
				std::string getScalingGroupName12()const;
				void setScalingGroupName12(const std::string& scalingGroupName12);

            private:
				long resourceOwnerId_;
				std::string scalingGroupId10_;
				std::string scalingGroupId12_;
				std::string scalingGroupId13_;
				std::string scalingGroupId14_;
				std::string scalingGroupId15_;
				long ownerId_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string regionId_;
				int pageSize_;
				std::string scalingGroupName20_;
				std::string scalingGroupName19_;
				std::string scalingGroupId20_;
				std::string scalingGroupName18_;
				std::string scalingGroupName17_;
				std::string scalingGroupName16_;
				std::string resourceOwnerAccount_;
				std::string scalingGroupName_;
				std::string ownerAccount_;
				std::string scalingGroupName1_;
				std::string scalingGroupName2_;
				std::string scalingGroupId2_;
				std::string scalingGroupId1_;
				std::string scalingGroupId6_;
				std::string scalingGroupId16_;
				std::string scalingGroupName7_;
				std::string scalingGroupName11_;
				std::string scalingGroupId5_;
				std::string scalingGroupId17_;
				std::string scalingGroupName8_;
				std::string scalingGroupName10_;
				std::string scalingGroupId4_;
				std::string scalingGroupId18_;
				std::string scalingGroupName9_;
				std::string scalingGroupId3_;
				std::string scalingGroupId19_;
				std::string scalingGroupName3_;
				std::string scalingGroupName15_;
				std::string scalingGroupId9_;
				std::string scalingGroupName4_;
				std::string scalingGroupName14_;
				std::string scalingGroupId8_;
				std::string scalingGroupName5_;
				std::string scalingGroupName13_;
				std::string scalingGroupId7_;
				std::string scalingGroupName6_;
				std::string scalingGroupName12_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGGROUPSREQUEST_H_