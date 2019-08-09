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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEWEBSITESCANRESULTRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEWEBSITESCANRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeWebsiteScanResultResult : public ServiceResult
			{
			public:
				struct WebsiteScanResult
				{
					int sourceRiskCount;
					std::string taskId;
					std::string instanceId;
					int handleStatus;
					int imageRiskCount;
					std::vector<std::string> labels;
					int id;
					std::string scanTime;
					std::string domain;
					int textRiskCount;
					std::string url;
				};


				DescribeWebsiteScanResultResult();
				explicit DescribeWebsiteScanResultResult(const std::string &payload);
				~DescribeWebsiteScanResultResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<WebsiteScanResult> getWebsiteScanResultList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<WebsiteScanResult> websiteScanResultList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEWEBSITESCANRESULTRESULT_H_