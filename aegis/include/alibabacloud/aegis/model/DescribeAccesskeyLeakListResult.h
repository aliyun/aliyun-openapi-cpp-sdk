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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEACCESSKEYLEAKLISTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEACCESSKEYLEAKLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAccesskeyLeakListResult : public ServiceResult
			{
			public:
				struct AccessKeyLeak
				{
					std::string status;
					std::string aliUserName;
					std::string type;
					std::string dealType;
					std::string accesskeyId;
					long gmtModified;
					std::string asset;
					long id;
					std::string dealTime;
					std::string userType;
				};


				DescribeAccesskeyLeakListResult();
				explicit DescribeAccesskeyLeakListResult(const std::string &payload);
				~DescribeAccesskeyLeakListResult();
				int getAkLeakCount()const;
				std::vector<AccessKeyLeak> getAccessKeyLeakList()const;
				int getTotalCount()const;
				int getPageSize()const;
				long getGmtLast()const;
				int getCurrentPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				int akLeakCount_;
				std::vector<AccessKeyLeak> accessKeyLeakList_;
				int totalCount_;
				int pageSize_;
				long gmtLast_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEACCESSKEYLEAKLISTRESULT_H_