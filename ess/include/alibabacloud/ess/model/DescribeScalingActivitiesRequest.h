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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESREQUEST_H_

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
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingActivitiesRequest : public RpcServiceRequest
			{

			public:
				DescribeScalingActivitiesRequest();
				~DescribeScalingActivitiesRequest();

				std::string getScalingActivityId9()const;
				void setScalingActivityId9(const std::string& scalingActivityId9);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getScalingActivityId5()const;
				void setScalingActivityId5(const std::string& scalingActivityId5);
				std::string getScalingActivityId6()const;
				void setScalingActivityId6(const std::string& scalingActivityId6);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getScalingActivityId7()const;
				void setScalingActivityId7(const std::string& scalingActivityId7);
				std::string getScalingActivityId8()const;
				void setScalingActivityId8(const std::string& scalingActivityId8);
				std::string getScalingActivityId1()const;
				void setScalingActivityId1(const std::string& scalingActivityId1);
				std::string getScalingActivityId2()const;
				void setScalingActivityId2(const std::string& scalingActivityId2);
				std::string getScalingActivityId3()const;
				void setScalingActivityId3(const std::string& scalingActivityId3);
				std::string getScalingActivityId4()const;
				void setScalingActivityId4(const std::string& scalingActivityId4);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getStatusCode()const;
				void setStatusCode(const std::string& statusCode);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getScalingActivityId11()const;
				void setScalingActivityId11(const std::string& scalingActivityId11);
				std::string getScalingActivityId10()const;
				void setScalingActivityId10(const std::string& scalingActivityId10);
				std::string getScalingActivityId13()const;
				void setScalingActivityId13(const std::string& scalingActivityId13);
				std::string getScalingActivityId12()const;
				void setScalingActivityId12(const std::string& scalingActivityId12);
				std::string getScalingActivityId15()const;
				void setScalingActivityId15(const std::string& scalingActivityId15);
				std::string getScalingActivityId14()const;
				void setScalingActivityId14(const std::string& scalingActivityId14);
				std::string getScalingActivityId17()const;
				void setScalingActivityId17(const std::string& scalingActivityId17);
				std::string getScalingActivityId16()const;
				void setScalingActivityId16(const std::string& scalingActivityId16);
				std::string getScalingActivityId19()const;
				void setScalingActivityId19(const std::string& scalingActivityId19);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getScalingActivityId18()const;
				void setScalingActivityId18(const std::string& scalingActivityId18);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScalingActivityId20()const;
				void setScalingActivityId20(const std::string& scalingActivityId20);

            private:
				std::string scalingActivityId9_;
				long resourceOwnerId_;
				std::string scalingActivityId5_;
				std::string scalingActivityId6_;
				std::string scalingGroupId_;
				std::string scalingActivityId7_;
				std::string scalingActivityId8_;
				std::string scalingActivityId1_;
				std::string scalingActivityId2_;
				std::string scalingActivityId3_;
				std::string scalingActivityId4_;
				int pageNumber_;
				std::string accessKeyId_;
				std::string statusCode_;
				std::string regionId_;
				int pageSize_;
				std::string scalingActivityId11_;
				std::string scalingActivityId10_;
				std::string scalingActivityId13_;
				std::string scalingActivityId12_;
				std::string scalingActivityId15_;
				std::string scalingActivityId14_;
				std::string scalingActivityId17_;
				std::string scalingActivityId16_;
				std::string scalingActivityId19_;
				std::string resourceOwnerAccount_;
				std::string scalingActivityId18_;
				std::string ownerAccount_;
				long ownerId_;
				std::string scalingActivityId20_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGACTIVITIESREQUEST_H_