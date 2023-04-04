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

#ifndef ALIBABACLOUD_IMM_MODEL_GENERATEDRMLICENSERESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GENERATEDRMLICENSERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT GenerateDRMLicenseResult : public ServiceResult
			{
			public:


				GenerateDRMLicenseResult();
				explicit GenerateDRMLicenseResult(const std::string &payload);
				~GenerateDRMLicenseResult();
				long getStates()const;
				std::string getLicense()const;
				std::string getDeviceInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				long states_;
				std::string license_;
				std::string deviceInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_GENERATEDRMLICENSERESULT_H_