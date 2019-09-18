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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEAUDITCONTENTREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEAUDITCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeAuditContentRequest : public RpcServiceRequest
			{

			public:
				DescribeAuditContentRequest();
				~DescribeAuditContentRequest();

				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				std::string getScene()const;
				void setScene(const std::string& scene);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLibType()const;
				void setLibType(const std::string& libType);
				std::string getAuditResult()const;
				void setAuditResult(const std::string& auditResult);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				std::string getKeywordId()const;
				void setKeywordId(const std::string& keywordId);
				std::string getSuggestion()const;
				void setSuggestion(const std::string& suggestion);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getLabel()const;
				void setLabel(const std::string& label);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getDataId()const;
				void setDataId(const std::string& dataId);

            private:
				std::string imageId_;
				std::string startDate_;
				std::string scene_;
				std::string sourceIp_;
				std::string libType_;
				std::string auditResult_;
				int pageSize_;
				std::string lang_;
				std::string taskId_;
				int totalCount_;
				std::string keywordId_;
				std::string suggestion_;
				int currentPage_;
				std::string label_;
				std::string resourceType_;
				std::string bizType_;
				std::string endDate_;
				std::string dataId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEAUDITCONTENTREQUEST_H_