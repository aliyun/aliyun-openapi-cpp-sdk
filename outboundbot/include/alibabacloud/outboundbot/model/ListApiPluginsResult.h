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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTAPIPLUGINSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTAPIPLUGINSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListApiPluginsResult : public ServiceResult
			{
			public:
				struct ApiPlugin
				{
					std::string status;
					std::string type;
					long gmtCreate;
					std::string uuid;
					std::string description;
					std::string instanceId;
					std::string draftedConfigJson;
					std::string publishedConfigJson;
					long gmtModified;
					std::string name;
				};


				ListApiPluginsResult();
				explicit ListApiPluginsResult(const std::string &payload);
				~ListApiPluginsResult();
				long getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ApiPlugin> getApiPlugins()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<ApiPlugin> apiPlugins_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTAPIPLUGINSRESULT_H_