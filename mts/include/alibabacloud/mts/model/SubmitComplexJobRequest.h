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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITCOMPLEXJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITCOMPLEXJOBREQUEST_H_

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
			class ALIBABACLOUD_MTS_EXPORT SubmitComplexJobRequest : public RpcServiceRequest
			{

			public:
				SubmitComplexJobRequest();
				~SubmitComplexJobRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTranscodeOutput()const;
				void setTranscodeOutput(const std::string& transcodeOutput);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getInputs()const;
				void setInputs(const std::string& inputs);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getOutputLocation()const;
				void setOutputLocation(const std::string& outputLocation);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPipelineId()const;
				void setPipelineId(const std::string& pipelineId);
				std::string getOutputBucket()const;
				void setOutputBucket(const std::string& outputBucket);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getComplexConfigs()const;
				void setComplexConfigs(const std::string& complexConfigs);

            private:
				long resourceOwnerId_;
				std::string transcodeOutput_;
				std::string resourceOwnerAccount_;
				std::string inputs_;
				std::string ownerAccount_;
				std::string outputLocation_;
				long ownerId_;
				std::string accessKeyId_;
				std::string pipelineId_;
				std::string outputBucket_;
				std::string userData_;
				std::string complexConfigs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITCOMPLEXJOBREQUEST_H_