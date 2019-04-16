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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_EVALUATEFAILOVERSWITCHRESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_EVALUATEFAILOVERSWITCHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT EvaluateFailOverSwitchResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					struct AccountsItem
					{
						std::string accountDescription;
						std::string accountStatus;
						std::string accountID;
						std::string privExceeded;
						std::string accountPrivilege;
						std::string accountPrivilegeDetail;
						std::string accountType;
						std::string engine;
						std::string accountName;
					};
					bool hasInternetIP;
					std::string internetIP;
					std::string dBInstanceId;
					std::string securityIPList;
					std::string readWriteType;
					std::string regionId;
					std::vector<ItemsItem::AccountsItem> accounts;
					std::string instanceNetworkType;
				};
				struct ReportsItem
				{
					std::string checkType;
					std::string reasonMessage;
					std::string severity;
					std::string reasonCode;
				};


				EvaluateFailOverSwitchResult();
				explicit EvaluateFailOverSwitchResult(const std::string &payload);
				~EvaluateFailOverSwitchResult();
				std::string getEvaluateResult()const;
				std::vector<ReportsItem> getReports()const;
				std::vector<ItemsItem> getItems()const;
				std::string getReplicaId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string evaluateResult_;
				std::vector<ReportsItem> reports_;
				std::vector<ItemsItem> items_;
				std::string replicaId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_EVALUATEFAILOVERSWITCHRESULT_H_