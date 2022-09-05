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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEINTEGRATIONRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEINTEGRATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateIntegrationResult : public ServiceResult
			{
			public:
				struct Integration
				{
					std::string integrationName;
					std::string description;
					bool autoRecover;
					long integrationId;
					std::string integrationProductType;
					long recoverTime;
				};


				CreateIntegrationResult();
				explicit CreateIntegrationResult(const std::string &payload);
				~CreateIntegrationResult();
				Integration getIntegration()const;

			protected:
				void parse(const std::string &payload);
			private:
				Integration integration_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEINTEGRATIONRESULT_H_