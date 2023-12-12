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

#ifndef ALIBABACLOUD_HITSDB_MODEL_GETENGINEDEFAULTAUTHRESULT_H_
#define ALIBABACLOUD_HITSDB_MODEL_GETENGINEDEFAULTAUTHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT GetEngineDefaultAuthResult : public ServiceResult
			{
			public:
				struct AuthInfo
				{
					std::string username;
					std::string engine;
					std::string password;
				};


				GetEngineDefaultAuthResult();
				explicit GetEngineDefaultAuthResult(const std::string &payload);
				~GetEngineDefaultAuthResult();
				std::vector<AuthInfo> getAuthInfos()const;
				std::string getInstanceId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AuthInfo> authInfos_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_GETENGINEDEFAULTAUTHRESULT_H_