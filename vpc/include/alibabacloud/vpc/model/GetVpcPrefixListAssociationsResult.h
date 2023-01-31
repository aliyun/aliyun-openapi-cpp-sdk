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

#ifndef ALIBABACLOUD_VPC_MODEL_GETVPCPREFIXLISTASSOCIATIONSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_GETVPCPREFIXLISTASSOCIATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT GetVpcPrefixListAssociationsResult : public ServiceResult
			{
			public:
				struct PrefixListAssociations
				{
					std::string status;
					std::string ownerId;
					std::string prefixListId;
					std::string resourceId;
					std::string resourceType;
					std::string regionId;
					std::string resourceUid;
					std::string reason;
				};


				GetVpcPrefixListAssociationsResult();
				explicit GetVpcPrefixListAssociationsResult(const std::string &payload);
				~GetVpcPrefixListAssociationsResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				std::vector<PrefixListAssociations> getPrefixListAssociation()const;
				long getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				std::vector<PrefixListAssociations> prefixListAssociation_;
				long count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_GETVPCPREFIXLISTASSOCIATIONSRESULT_H_