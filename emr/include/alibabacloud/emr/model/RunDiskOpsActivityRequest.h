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

#ifndef ALIBABACLOUD_EMR_MODEL_RUNDISKOPSACTIVITYREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_RUNDISKOPSACTIVITYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT RunDiskOpsActivityRequest : public RpcServiceRequest
			{

			public:
				RunDiskOpsActivityRequest();
				~RunDiskOpsActivityRequest();

				std::string getEventId()const;
				void setEventId(const std::string& eventId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getCurrentStage()const;
				void setCurrentStage(const std::string& currentStage);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDiskId()const;
				void setDiskId(const std::string& diskId);
				std::string getCurrentState()const;
				void setCurrentState(const std::string& currentState);

            private:
				std::string eventId_;
				long resourceOwnerId_;
				std::string currentStage_;
				std::string clusterId_;
				std::string accessKeyId_;
				std::string instanceId_;
				std::string regionId_;
				std::string diskId_;
				std::string currentState_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_RUNDISKOPSACTIVITYREQUEST_H_