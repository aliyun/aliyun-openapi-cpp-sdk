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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT SubmitEditingJobsRequest : public RpcServiceRequest
			{

			public:
				SubmitEditingJobsRequest();
				~SubmitEditingJobsRequest();

				std::string getOutputBucket()const;
				void setOutputBucket(const std::string& outputBucket);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getEditingJobOutputs()const;
				void setEditingJobOutputs(const std::string& editingJobOutputs);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getOutputLocation()const;
				void setOutputLocation(const std::string& outputLocation);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getEditingInputs()const;
				void setEditingInputs(const std::string& editingInputs);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPipelineId()const;
				void setPipelineId(const std::string& pipelineId);

            private:
				std::string outputBucket_;
				long resourceOwnerId_;
				std::string editingJobOutputs_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string outputLocation_;
				long ownerId_;
				std::string editingInputs_;
				std::string accessKeyId_;
				std::string pipelineId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSREQUEST_H_