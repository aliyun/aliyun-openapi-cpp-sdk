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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATEFLOWEDITLOCKRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_CREATEFLOWEDITLOCKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT CreateFlowEditLockResult : public ServiceResult
			{
			public:


				CreateFlowEditLockResult();
				explicit CreateFlowEditLockResult(const std::string &payload);
				~CreateFlowEditLockResult();
				std::string getEntityId()const;
				std::string getStatus()const;
				std::string getOwnerId()const;
				std::string getUserId()const;
				std::string getBizId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string entityId_;
				std::string status_;
				std::string ownerId_;
				std::string userId_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATEFLOWEDITLOCKRESULT_H_