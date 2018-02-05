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

#ifndef ALIBABACLOUD_ESS_MODEL_REMOVEINSTANCESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_REMOVEINSTANCESREQUEST_H_

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
			class ALIBABACLOUD_ESS_EXPORT RemoveInstancesRequest : public RpcServiceRequest
			{

			public:
				RemoveInstancesRequest();
				~RemoveInstancesRequest();

				std::string getInstanceId10()const;
				void setInstanceId10(const std::string& instanceId10);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getInstanceId12()const;
				void setInstanceId12(const std::string& instanceId12);
				std::string getInstanceId11()const;
				void setInstanceId11(const std::string& instanceId11);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getInstanceId20()const;
				void setInstanceId20(const std::string& instanceId20);
				std::string getInstanceId1()const;
				void setInstanceId1(const std::string& instanceId1);
				std::string getInstanceId3()const;
				void setInstanceId3(const std::string& instanceId3);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getInstanceId2()const;
				void setInstanceId2(const std::string& instanceId2);
				std::string getInstanceId5()const;
				void setInstanceId5(const std::string& instanceId5);
				std::string getInstanceId4()const;
				void setInstanceId4(const std::string& instanceId4);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getInstanceId7()const;
				void setInstanceId7(const std::string& instanceId7);
				std::string getInstanceId6()const;
				void setInstanceId6(const std::string& instanceId6);
				std::string getInstanceId9()const;
				void setInstanceId9(const std::string& instanceId9);
				std::string getInstanceId8()const;
				void setInstanceId8(const std::string& instanceId8);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceId18()const;
				void setInstanceId18(const std::string& instanceId18);
				std::string getInstanceId17()const;
				void setInstanceId17(const std::string& instanceId17);
				std::string getInstanceId19()const;
				void setInstanceId19(const std::string& instanceId19);
				std::string getInstanceId14()const;
				void setInstanceId14(const std::string& instanceId14);
				std::string getInstanceId13()const;
				void setInstanceId13(const std::string& instanceId13);
				std::string getInstanceId16()const;
				void setInstanceId16(const std::string& instanceId16);
				std::string getInstanceId15()const;
				void setInstanceId15(const std::string& instanceId15);

            private:
				std::string instanceId10_;
				long resourceOwnerId_;
				std::string instanceId12_;
				std::string instanceId11_;
				std::string scalingGroupId_;
				std::string accessKeyId_;
				std::string instanceId20_;
				std::string instanceId1_;
				std::string instanceId3_;
				std::string resourceOwnerAccount_;
				std::string instanceId2_;
				std::string instanceId5_;
				std::string instanceId4_;
				std::string ownerAccount_;
				std::string instanceId7_;
				std::string instanceId6_;
				std::string instanceId9_;
				std::string instanceId8_;
				long ownerId_;
				std::string instanceId18_;
				std::string instanceId17_;
				std::string instanceId19_;
				std::string instanceId14_;
				std::string instanceId13_;
				std::string instanceId16_;
				std::string instanceId15_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_REMOVEINSTANCESREQUEST_H_