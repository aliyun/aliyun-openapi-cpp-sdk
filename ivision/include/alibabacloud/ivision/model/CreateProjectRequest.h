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

#ifndef ALIBABACLOUD_IVISION_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_IVISION_MODEL_CREATEPROJECTREQUEST_H_

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
			class ALIBABACLOUD_IVISION_EXPORT CreateProjectRequest : public RpcServiceRequest
			{

			public:
				CreateProjectRequest();
				~CreateProjectRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getModelId()const;
				void setModelId(const std::string& modelId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getProType()const;
				void setProType(const std::string& proType);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string description_;
				std::string showLog_;
				std::string modelId_;
				long ownerId_;
				std::string proType_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_CREATEPROJECTREQUEST_H_