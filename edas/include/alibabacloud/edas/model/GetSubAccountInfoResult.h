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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETSUBACCOUNTINFORESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETSUBACCOUNTINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetSubAccountInfoResult : public ServiceResult
			{
			public:
				struct Authorization
				{
					std::string adminEdasId;
					std::string edasId;
					std::string roleIdData;
					long createTime;
					std::string adminUserId;
					bool ramOperation;
					bool delegateAdmin;
					std::string resGroupIdData;
					bool isRamDel;
					bool isRamSlave;
					bool sts;
					std::string userId;
					std::string appIdData;
					long updateTime;
					long resGroupId;
					std::string subUserKp;
				};


				GetSubAccountInfoResult();
				explicit GetSubAccountInfoResult(const std::string &payload);
				~GetSubAccountInfoResult();
				Authorization getAuthorization()const;
				std::string getMessage()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				Authorization authorization_;
				std::string message_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETSUBACCOUNTINFORESULT_H_