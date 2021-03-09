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

#ifndef ALIBABACLOUD_CCC_MODEL_SUBMITCABRECORDINGREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_SUBMITCABRECORDINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT SubmitCabRecordingRequest : public RpcServiceRequest
			{

			public:
				SubmitCabRecordingRequest();
				~SubmitCabRecordingRequest();

				std::string getMergedRecording()const;
				void setMergedRecording(const std::string& mergedRecording);
				std::string getResourceRecording()const;
				void setResourceRecording(const std::string& resourceRecording);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				long getInstanceOwnerId()const;
				void setInstanceOwnerId(long instanceOwnerId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				std::string mergedRecording_;
				std::string resourceRecording_;
				std::string instanceId_;
				long instanceOwnerId_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_SUBMITCABRECORDINGREQUEST_H_