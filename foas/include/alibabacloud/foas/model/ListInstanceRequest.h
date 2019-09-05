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

#ifndef ALIBABACLOUD_FOAS_MODEL_LISTINSTANCEREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_LISTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT ListInstanceRequest : public RoaServiceRequest
			{

			public:
				ListInstanceRequest();
				~ListInstanceRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				long getEndBeginTs()const;
				void setEndBeginTs(long endBeginTs);
				std::string getExpectState()const;
				void setExpectState(const std::string& expectState);
				std::string getJobType()const;
				void setJobType(const std::string& jobType);
				std::string getApiType()const;
				void setApiType(const std::string& apiType);
				std::string getActualState()const;
				void setActualState(const std::string& actualState);
				long getEndEndTs()const;
				void setEndEndTs(long endEndTs);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getStartEndTs()const;
				void setStartEndTs(long startEndTs);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getStartBeginTs()const;
				void setStartBeginTs(long startBeginTs);
				int getPageIndex()const;
				void setPageIndex(int pageIndex);
				bool getIsArchived()const;
				void setIsArchived(bool isArchived);
				std::string getJobName()const;
				void setJobName(const std::string& jobName);

            private:
				std::string projectName_;
				long endBeginTs_;
				std::string expectState_;
				std::string jobType_;
				std::string apiType_;
				std::string actualState_;
				long endEndTs_;
				std::string regionId_;
				long startEndTs_;
				int pageSize_;
				long startBeginTs_;
				int pageIndex_;
				bool isArchived_;
				std::string jobName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_LISTINSTANCEREQUEST_H_