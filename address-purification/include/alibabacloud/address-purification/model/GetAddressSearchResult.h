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

#ifndef ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_GETADDRESSSEARCHRESULT_H_
#define ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_GETADDRESSSEARCHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/address-purification/Address_purificationExport.h>

namespace AlibabaCloud
{
	namespace Address_purification
	{
		namespace Model
		{
			class ALIBABACLOUD_ADDRESS_PURIFICATION_EXPORT GetAddressSearchResult : public ServiceResult
			{
			public:


				GetAddressSearchResult();
				explicit GetAddressSearchResult(const std::string &payload);
				~GetAddressSearchResult();
				std::string getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_GETADDRESSSEARCHRESULT_H_