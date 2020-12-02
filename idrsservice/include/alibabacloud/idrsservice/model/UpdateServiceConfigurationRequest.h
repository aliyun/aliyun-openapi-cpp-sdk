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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATESERVICECONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATESERVICECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/idrsservice/IdrsserviceExport.h>

namespace AlibabaCloud
{
	namespace Idrsservice
	{
		namespace Model
		{
			class ALIBABACLOUD_IDRSSERVICE_EXPORT UpdateServiceConfigurationRequest : public RpcServiceRequest
			{

			public:
				UpdateServiceConfigurationRequest();
				~UpdateServiceConfigurationRequest();

				int getLiveRecordMaxClient()const;
				void setLiveRecordMaxClient(int liveRecordMaxClient);
				int getLiveRecordVideoResolution()const;
				void setLiveRecordVideoResolution(int liveRecordVideoResolution);
				int getTaskItemQueueSize()const;
				void setTaskItemQueueSize(int taskItemQueueSize);
				int getLiveRecordLayout()const;
				void setLiveRecordLayout(int liveRecordLayout);
				int getClientQueueSize()const;
				void setClientQueueSize(int clientQueueSize);
				std::string getLiveRecordTaskProfile()const;
				void setLiveRecordTaskProfile(const std::string& liveRecordTaskProfile);
				bool getLiveRecordAll()const;
				void setLiveRecordAll(bool liveRecordAll);
				bool getLiveRecordEveryOne()const;
				void setLiveRecordEveryOne(bool liveRecordEveryOne);

            private:
				int liveRecordMaxClient_;
				int liveRecordVideoResolution_;
				int taskItemQueueSize_;
				int liveRecordLayout_;
				int clientQueueSize_;
				std::string liveRecordTaskProfile_;
				bool liveRecordAll_;
				bool liveRecordEveryOne_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_UPDATESERVICECONFIGURATIONREQUEST_H_