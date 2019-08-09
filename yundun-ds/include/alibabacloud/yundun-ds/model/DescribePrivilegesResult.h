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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEPRIVILEGESRESULT_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEPRIVILEGESRESULT_H_

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
			class ALIBABACLOUD_YUNDUN_DS_EXPORT DescribePrivilegesResult : public ServiceResult
			{
			public:
				struct Privilege
				{
					int useAccountType;
					std::string dataTable;
					std::string dataInstance;
					long accountId;
					std::string productName;
					std::string productCode;
					std::string resourceName;
					std::string operation;
					std::string policyCondition;
					int accountType;
					std::string resourcePath;
					std::string dataTypeId;
					std::string dataColumn;
					std::string dataType;
					std::string dataPackage;
					std::string sensitive;
					long id;
					std::string dataTypeName;
					long useAccountId;
				};


				DescribePrivilegesResult();
				explicit DescribePrivilegesResult(const std::string &payload);
				~DescribePrivilegesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Privilege> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Privilege> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_DESCRIBEPRIVILEGESRESULT_H_