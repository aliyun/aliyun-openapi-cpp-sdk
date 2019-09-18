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

#ifndef ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTMODELSREQUEST_H_
#define ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTMODELSREQUEST_H_

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
			class ALIBABACLOUD_IVISION_EXPORT DescribePredictModelsRequest : public RpcServiceRequest
			{

			public:
				DescribePredictModelsRequest();
				~DescribePredictModelsRequest();

				std::string getSource()const;
				void setSource(const std::string& source);
				std::string getType()const;
				void setType(const std::string& type);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getCurrentPage()const;
				void setCurrentPage(long currentPage);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getModelIds()const;
				void setModelIds(const std::string& modelIds);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getDeployStatus()const;
				void setDeployStatus(const std::string& deployStatus);

            private:
				std::string source_;
				std::string type_;
				long pageSize_;
				std::string showLog_;
				long currentPage_;
				long ownerId_;
				std::string modelIds_;
				std::string name_;
				std::string deployStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTMODELSREQUEST_H_