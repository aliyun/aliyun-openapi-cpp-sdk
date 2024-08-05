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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTTRACEAPPSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTTRACEAPPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListTraceAppsResult : public ServiceResult
			{
			public:
				struct TraceApp
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string resourceGroupId;
					std::string clusterId;
					long createTime;
					std::string pid;
					std::string _namespace;
					std::vector<std::string> labels;
					std::string source;
					std::string appName;
					std::string type;
					long appId;
					std::string workloadName;
					std::string language;
					std::string userId;
					long updateTime;
					bool show;
					std::string regionId;
					std::vector<TraceApp::TagsItem> tags;
					std::string workloadKind;
				};


				ListTraceAppsResult();
				explicit ListTraceAppsResult(const std::string &payload);
				~ListTraceAppsResult();
				std::vector<TraceApp> getTraceApps()const;
				std::string getMessage()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TraceApp> traceApps_;
				std::string message_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTTRACEAPPSRESULT_H_