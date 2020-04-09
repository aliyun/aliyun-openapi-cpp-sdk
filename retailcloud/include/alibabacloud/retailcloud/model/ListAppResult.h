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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_LISTAPPRESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_LISTAPPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT ListAppResult : public ServiceResult
			{
			public:
				struct AppDetail
				{
					struct MiddleWareInfo
					{
						long appId;
						int code;
						std::string name;
					};
					std::string operatingSystem;
					std::string deployType;
					std::string appStateType;
					std::string description;
					long appId;
					std::string language;
					std::string serviceType;
					std::vector<AppDetail::MiddleWareInfo> middleWareList;
					std::string title;
					std::string bizTitle;
					std::string bizName;
				};


				ListAppResult();
				explicit ListAppResult(const std::string &payload);
				~ListAppResult();
				int getTotalCount()const;
				std::string getErrorMsg()const;
				std::vector<AppDetail> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string errorMsg_;
				std::vector<AppDetail> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_LISTAPPRESULT_H_