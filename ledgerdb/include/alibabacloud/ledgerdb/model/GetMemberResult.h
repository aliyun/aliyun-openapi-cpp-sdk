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

#ifndef ALIBABACLOUD_LEDGERDB_MODEL_GETMEMBERRESULT_H_
#define ALIBABACLOUD_LEDGERDB_MODEL_GETMEMBERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ledgerdb/LedgerdbExport.h>

namespace AlibabaCloud
{
	namespace Ledgerdb
	{
		namespace Model
		{
			class ALIBABACLOUD_LEDGERDB_EXPORT GetMemberResult : public ServiceResult
			{
			public:


				GetMemberResult();
				explicit GetMemberResult(const std::string &payload);
				~GetMemberResult();
				std::string getRole()const;
				std::string getMemberId()const;
				std::string getKeyType()const;
				std::string getPublicKey()const;
				std::string getState()const;
				long getCreateTime()const;
				long getUpdateTime()const;
				std::string getLedgerId()const;
				std::string getAliUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string role_;
				std::string memberId_;
				std::string keyType_;
				std::string publicKey_;
				std::string state_;
				long createTime_;
				long updateTime_;
				std::string ledgerId_;
				std::string aliUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LEDGERDB_MODEL_GETMEMBERRESULT_H_