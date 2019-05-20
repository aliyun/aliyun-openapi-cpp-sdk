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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATAHUBSUBSCRIPTIONSRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATAHUBSUBSCRIPTIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribeDataHubSubscriptionsResult : public ServiceResult
			{
			public:
				struct Subscription
				{
					std::string loginName;
					std::string description;
					std::string applicationName;
					std::string state;
					long userId;
					long creationTime;
					std::string displayName;
					std::string subscriptionDisplayName;
					long id;
					long subscriptionUserId;
					std::string subscriptionUserName;
					std::string name;
				};


				DescribeDataHubSubscriptionsResult();
				explicit DescribeDataHubSubscriptionsResult(const std::string &payload);
				~DescribeDataHubSubscriptionsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Subscription> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Subscription> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEDATAHUBSUBSCRIPTIONSRESULT_H_