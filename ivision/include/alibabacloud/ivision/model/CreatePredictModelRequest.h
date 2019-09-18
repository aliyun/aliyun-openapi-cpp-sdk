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

#ifndef ALIBABACLOUD_IVISION_MODEL_CREATEPREDICTMODELREQUEST_H_
#define ALIBABACLOUD_IVISION_MODEL_CREATEPREDICTMODELREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivision/IvisionExport.h>

namespace AlibabaCloud
{
	namespace Ivision
	{
		namespace Model
		{
			class ALIBABACLOUD_IVISION_EXPORT CreatePredictModelRequest : public RpcServiceRequest
			{

			public:
				CreatePredictModelRequest();
				~CreatePredictModelRequest();

				std::string getRegions()const;
				void setRegions(const std::string& regions);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSource()const;
				void setSource(const std::string& source);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getModelId()const;
				void setModelId(const std::string& modelId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getIterationId()const;
				void setIterationId(const std::string& iterationId);

            private:
				std::string regions_;
				std::string description_;
				std::string source_;
				std::string projectId_;
				std::string showLog_;
				std::string modelId_;
				long ownerId_;
				std::string name_;
				std::string iterationId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_CREATEPREDICTMODELREQUEST_H_