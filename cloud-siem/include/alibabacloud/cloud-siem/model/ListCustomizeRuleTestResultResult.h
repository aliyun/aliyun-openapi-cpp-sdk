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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTCUSTOMIZERULETESTRESULTRESULT_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTCUSTOMIZERULETESTRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloud-siem/Cloud_siemExport.h>

namespace AlibabaCloud
{
	namespace Cloud_siem
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUD_SIEM_EXPORT ListCustomizeRuleTestResultResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PageInfo
					{
						long totalCount;
						int pageSize;
						int currentPage;
						long verifiedCount;
					};
					struct ResponseDataItem
					{
						std::string mainUserId;
						std::string attCk;
						std::string eventType;
						std::string alertSrcProd;
						std::string alertSrcProdModule;
						std::string logTime;
						std::string logType;
						std::string onlineStatus;
						std::string subUserId;
						std::string eventName;
						std::string verifyType;
						std::string alertDesc;
						std::string uuid;
						std::string logSource;
						std::string alertDetail;
						std::string level;
					};
					PageInfo pageInfo;
					std::vector<ResponseDataItem> responseData;
				};


				ListCustomizeRuleTestResultResult();
				explicit ListCustomizeRuleTestResultResult(const std::string &payload);
				~ListCustomizeRuleTestResultResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_LISTCUSTOMIZERULETESTRESULTRESULT_H_