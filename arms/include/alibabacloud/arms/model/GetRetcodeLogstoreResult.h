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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETRETCODELOGSTORERESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETRETCODELOGSTORERESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT GetRetcodeLogstoreResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RetcodeSLSConfig
					{
						std::string project;
						std::string logstore;
						std::string regionId;
					};
					std::string status;
					RetcodeSLSConfig retcodeSLSConfig;
					std::string message;
				};


				GetRetcodeLogstoreResult();
				explicit GetRetcodeLogstoreResult(const std::string &payload);
				~GetRetcodeLogstoreResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETRETCODELOGSTORERESULT_H_