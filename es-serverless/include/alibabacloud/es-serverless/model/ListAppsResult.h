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

#ifndef ALIBABACLOUD_ES_SERVERLESS_MODEL_LISTAPPSRESULT_H_
#define ALIBABACLOUD_ES_SERVERLESS_MODEL_LISTAPPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/es-serverless/Es_serverlessExport.h>

namespace AlibabaCloud
{
	namespace Es_serverless
	{
		namespace Model
		{
			class ALIBABACLOUD_ES_SERVERLESS_EXPORT ListAppsResult : public ServiceResult
			{
			public:
				struct App
				{
					std::string status;
					std::string description;
					std::string ownerId;
					std::string createTime;
					std::string storageQuota;
					std::string regionId;
					std::string appName;
					std::string flowQuota;
				};


				ListAppsResult();
				explicit ListAppsResult(const std::string &payload);
				~ListAppsResult();
				std::vector<App> getresult()const;
				int getTotalCount()const;
				std::string getRequestId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<App> result_;
				int totalCount_;
				std::string requestId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ES_SERVERLESS_MODEL_LISTAPPSRESULT_H_