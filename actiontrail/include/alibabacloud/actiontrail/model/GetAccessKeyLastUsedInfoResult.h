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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDINFORESULT_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT GetAccessKeyLastUsedInfoResult : public ServiceResult
			{
			public:


				GetAccessKeyLastUsedInfoResult();
				explicit GetAccessKeyLastUsedInfoResult(const std::string &payload);
				~GetAccessKeyLastUsedInfoResult();
				std::string getAccountId()const;
				std::string getUserName()const;
				std::string getOwnerId()const;
				std::string getServiceName()const;
				std::string getAccessKeyId()const;
				std::string getServiceNameCn()const;
				std::string getServiceNameEn()const;
				std::string getAccountType()const;
				long getUsedTimestamp()const;
				std::string getDetail()const;
				std::string getSource()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accountId_;
				std::string userName_;
				std::string ownerId_;
				std::string serviceName_;
				std::string accessKeyId_;
				std::string serviceNameCn_;
				std::string serviceNameEn_;
				std::string accountType_;
				long usedTimestamp_;
				std::string detail_;
				std::string source_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_GETACCESSKEYLASTUSEDINFORESULT_H_