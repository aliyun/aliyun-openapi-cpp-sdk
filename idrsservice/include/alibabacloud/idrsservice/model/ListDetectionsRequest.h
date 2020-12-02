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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_LISTDETECTIONSREQUEST_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_LISTDETECTIONSREQUEST_H_

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
			class ALIBABACLOUD_IDRSSERVICE_EXPORT ListDetectionsRequest : public RpcServiceRequest
			{

			public:
				ListDetectionsRequest();
				~ListDetectionsRequest();

				std::string getCreateDateTo()const;
				void setCreateDateTo(const std::string& createDateTo);
				std::string getDepartmentId()const;
				void setDepartmentId(const std::string& departmentId);
				std::string getRecordingType()const;
				void setRecordingType(const std::string& recordingType);
				std::string getCreateDateFrom()const;
				void setCreateDateFrom(const std::string& createDateFrom);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				std::string getRuleId()const;
				void setRuleId(const std::string& ruleId);

            private:
				std::string createDateTo_;
				std::string departmentId_;
				std::string recordingType_;
				std::string createDateFrom_;
				int pageSize_;
				int pageIndex_;
				std::string ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_LISTDETECTIONSREQUEST_H_