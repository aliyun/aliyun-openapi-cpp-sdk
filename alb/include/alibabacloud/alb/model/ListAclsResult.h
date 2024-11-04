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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTACLSRESULT_H_
#define ALIBABACLOUD_ALB_MODEL_LISTACLSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alb/AlbExport.h>

namespace AlibabaCloud
{
	namespace Alb
	{
		namespace Model
		{
			class ALIBABACLOUD_ALB_EXPORT ListAclsResult : public ServiceResult
			{
			public:
				struct Acl
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					bool serviceManagedEnabled;
					bool configManagedEnabled;
					std::string aclStatus;
					std::string resourceGroupId;
					std::string aclId;
					std::string addressIPVersion;
					std::string serviceManagedMode;
					std::string createTime;
					std::vector<Acl::Tag> tags;
					std::string aclName;
				};


				ListAclsResult();
				explicit ListAclsResult(const std::string &payload);
				~ListAclsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				std::vector<Acl> getAcls()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				std::vector<Acl> acls_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALB_MODEL_LISTACLSRESULT_H_