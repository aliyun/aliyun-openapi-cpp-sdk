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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTAUTHENTICATIONLOGSRESULT_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTAUTHENTICATIONLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/idaas-doraemon/Idaas_doraemonExport.h>

namespace AlibabaCloud
{
	namespace Idaas_doraemon
	{
		namespace Model
		{
			class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT ListAuthenticationLogsResult : public ServiceResult
			{
			public:
				struct AuthenticationLogContentItem
				{
					std::string authenticatorType;
					std::string authenticatorUuid;
					std::string credentialId;
					std::string challengeBase64;
					std::string rawAuthenticationContext;
					long authenticationTime;
					std::string applicationExternalId;
					std::string logTag;
					std::string logParams;
					std::string applicationUuid;
					std::string userSourceIp;
					std::string tenantId;
					std::string authenticationAction;
					std::string userId;
					std::string authenticatorName;
					std::string userAgent;
					std::string errorCode;
					bool verifyResult;
					std::string errorMessage;
					std::string aliUid;
				};


				ListAuthenticationLogsResult();
				explicit ListAuthenticationLogsResult(const std::string &payload);
				~ListAuthenticationLogsResult();
				long getTotalCount()const;
				std::vector<AuthenticationLogContentItem> getAuthenticationLogContent()const;
				long getPageSize()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<AuthenticationLogContentItem> authenticationLogContent_;
				long pageSize_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTAUTHENTICATIONLOGSRESULT_H_