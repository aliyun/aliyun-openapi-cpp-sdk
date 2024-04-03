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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBESMARTSTATISTICSPAGELISTRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBESMARTSTATISTICSPAGELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeSmartStatisticsPageListResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					long sceneId;
					int totalCount;
					std::string passRate;
					std::string sceneName;
					std::string productCode;
					int successCount;
					std::string date;
				};


				DescribeSmartStatisticsPageListResult();
				explicit DescribeSmartStatisticsPageListResult(const std::string &payload);
				~DescribeSmartStatisticsPageListResult();
				int getTotalCount()const;
				int getTotalPage()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<ItemsItem> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int totalPage_;
				int pageSize_;
				int currentPage_;
				std::vector<ItemsItem> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBESMARTSTATISTICSPAGELISTRESULT_H_