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

#ifndef ALIBABACLOUD_WSS_MODEL_MODIFYINSTANCEPROPERTIESRESULT_H_
#define ALIBABACLOUD_WSS_MODEL_MODIFYINSTANCEPROPERTIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/wss/WssExport.h>

namespace AlibabaCloud
{
	namespace Wss
	{
		namespace Model
		{
			class ALIBABACLOUD_WSS_EXPORT ModifyInstancePropertiesResult : public ServiceResult
			{
			public:


				ModifyInstancePropertiesResult();
				explicit ModifyInstancePropertiesResult(const std::string &payload);
				~ModifyInstancePropertiesResult();

			protected:
				void parse(const std::string &payload);
			private:

			};
		}
	}
}
#endif // !ALIBABACLOUD_WSS_MODEL_MODIFYINSTANCEPROPERTIESRESULT_H_