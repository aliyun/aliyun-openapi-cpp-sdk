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

#ifndef ALIBABACLOUD_BTRIPOPEN_MODEL_ACCESSTOKENRESULT_H_
#define ALIBABACLOUD_BTRIPOPEN_MODEL_ACCESSTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/btripopen/BtripOpenExport.h>

namespace AlibabaCloud
{
	namespace BtripOpen
	{
		namespace Model
		{
			class ALIBABACLOUD_BTRIPOPEN_EXPORT AccessTokenResult : public ServiceResult
			{
			public:
				struct Data
				{
					long expire;
					std::string token;
				};


				AccessTokenResult();
				explicit AccessTokenResult(const std::string &payload);
				~AccessTokenResult();
				std::string getRequestId()const;
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BTRIPOPEN_MODEL_ACCESSTOKENRESULT_H_