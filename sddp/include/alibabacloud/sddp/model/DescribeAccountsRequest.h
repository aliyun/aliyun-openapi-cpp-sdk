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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeAccountsRequest : public RpcServiceRequest
			{

			public:
				DescribeAccountsRequest();
				~DescribeAccountsRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getLoginName()const;
				void setLoginName(const std::string& loginName);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				std::string getColumnId()const;
				void setColumnId(const std::string& columnId);
				std::string getPackageId()const;
				void setPackageId(const std::string& packageId);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getDepartId()const;
				void setDepartId(long departId);
				int getOperationId()const;
				void setOperationId(int operationId);
				std::string getTableId()const;
				void setTableId(const std::string& tableId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getKey()const;
				void setKey(const std::string& key);
				int getQueryType()const;
				void setQueryType(int queryType);

            private:
				std::string productCode_;
				std::string loginName_;
				int featureType_;
				std::string columnId_;
				std::string packageId_;
				int currentPage_;
				std::string instanceId_;
				std::string sourceIp_;
				int pageSize_;
				long departId_;
				int operationId_;
				std::string tableId_;
				std::string lang_;
				std::string key_;
				int queryType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEACCOUNTSREQUEST_H_