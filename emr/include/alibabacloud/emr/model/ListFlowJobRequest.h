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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListFlowJobRequest : public RpcServiceRequest
			{

			public:
				ListFlowJobRequest();
				~ListFlowJobRequest();

				std::string getType()const;
				void setType(const std::string& type);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getId()const;
				void setId(const std::string& id);
				bool getAdhoc()const;
				void setAdhoc(bool adhoc);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string type_;
				int pageNumber_;
				std::string regionId_;
				std::string name_;
				int pageSize_;
				std::string id_;
				bool adhoc_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWJOBREQUEST_H_