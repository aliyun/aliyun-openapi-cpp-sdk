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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTGROUPSRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_LISTGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT ListGroupsResult : public ServiceResult
			{
			public:
				struct 服务组列表
				{
					std::string clusterId;
					std::string accessToken;
					std::string createTime;
					std::string updateTime;
					std::string internetEndpoint;
					std::string queueService;
					std::string intranetEndpoint;
					std::string name;
				};


				ListGroupsResult();
				explicit ListGroupsResult(const std::string &payload);
				~ListGroupsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<服务组列表> getGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<服务组列表> groups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_LISTGROUPSRESULT_H_