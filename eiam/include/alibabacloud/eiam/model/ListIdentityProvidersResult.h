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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTIDENTITYPROVIDERSRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTIDENTITYPROVIDERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT ListIdentityProvidersResult : public ServiceResult
			{
			public:
				struct IdentityProvider
				{
					std::string identityProviderId;
					std::string description;
					std::string authnSourceSupplier;
					std::string instanceId;
					std::string authnStatus;
					std::string logoUrl;
					long createTime;
					std::string identityProviderName;
					std::string udPullTargetScope;
					std::string authnSourceType;
					std::string lastStatusCheckJobResult;
					std::string advancedStatus;
					std::string periodicSyncStatus;
					std::string udPushStatus;
					std::string udPullStatus;
					long updateTime;
					std::string identityProviderExternalId;
					std::string identityProviderType;
					std::string lockReason;
					std::string incrementalCallbackStatus;
				};


				ListIdentityProvidersResult();
				explicit ListIdentityProvidersResult(const std::string &payload);
				~ListIdentityProvidersResult();
				long getTotalCount()const;
				std::vector<IdentityProvider> getIdentityProviders()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<IdentityProvider> identityProviders_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTIDENTITYPROVIDERSRESULT_H_