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

#ifndef ALIBABACLOUD_SAS_MODEL_UPDATEHONEYPOTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_UPDATEHONEYPOTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT UpdateHoneypotResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string honeypotImageName;
					std::string honeypotId;
					std::vector<std::string> state;
					std::string presetId;
					std::string honeypotImageDisplayName;
					std::string nodeId;
					std::string honeypotName;
				};


				UpdateHoneypotResult();
				explicit UpdateHoneypotResult(const std::string &payload);
				~UpdateHoneypotResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_UPDATEHONEYPOTRESULT_H_