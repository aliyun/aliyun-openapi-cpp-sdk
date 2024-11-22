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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERDEPRECATEDAPIRESULT_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERDEPRECATEDAPIRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qianzhou/QianzhouExport.h>

namespace AlibabaCloud
{
	namespace Qianzhou
	{
		namespace Model
		{
			class ALIBABACLOUD_QIANZHOU_EXPORT ListClusterDeprecatedAPIResult : public ServiceResult
			{
			public:
				struct Datas
				{
					struct DataItem
					{
						std::string user_agent;
						std::string target_version;
						std::string deprecated_k8s_version;
						std::string cluster_id;
						std::string last_time;
						std::string content;
						std::string request_uri;
						std::string label;
						int count;
						std::string current_version;
						std::string source_ips;
						std::string ds;
					};
					std::vector<DataItem> data;
					int pageSize;
					int total;
					int current;
				};


				ListClusterDeprecatedAPIResult();
				explicit ListClusterDeprecatedAPIResult(const std::string &payload);
				~ListClusterDeprecatedAPIResult();
				std::string getMsg()const;
				std::string getRequestId()const;
				Datas getDatas()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string requestId_;
				Datas datas_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_LISTCLUSTERDEPRECATEDAPIRESULT_H_