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

#ifndef ALIBABACLOUD_MOGUAN_SDK_MODEL_REGISTERDEVICERESULT_H_
#define ALIBABACLOUD_MOGUAN_SDK_MODEL_REGISTERDEVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/moguan-sdk/Moguan_sdkExport.h>

namespace AlibabaCloud
{
	namespace Moguan_sdk
	{
		namespace Model
		{
			class ALIBABACLOUD_MOGUAN_SDK_EXPORT RegisterDeviceResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string publicKey;
					std::string signature;
					std::string license;
					std::string rid;
				};


				RegisterDeviceResult();
				explicit RegisterDeviceResult(const std::string &payload);
				~RegisterDeviceResult();
				std::string getMessage()const;
				Data getData()const;
				int getErrorCode()const;
				std::string getErrorMessage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int errorCode_;
				std::string errorMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MOGUAN_SDK_MODEL_REGISTERDEVICERESULT_H_