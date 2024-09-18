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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_LISTAPIDATASOURCERESULT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_LISTAPIDATASOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>

namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		namespace Model
		{
			class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT ListApiDatasourceResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct DataItem
					{
						std::string dateUpdateTime;
						std::string gmtCreate;
						std::string parameters;
						int statusType;
						float dataSize;
						std::string gmtModified;
						std::string apiId;
						std::string body;
						std::string showName;
						std::string jobId;
					};
					int totalNum;
					int pageNum;
					int pageSize;
					std::vector<DataItem> data;
				};


				ListApiDatasourceResult();
				explicit ListApiDatasourceResult(const std::string &payload);
				~ListApiDatasourceResult();
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_LISTAPIDATASOURCERESULT_H_