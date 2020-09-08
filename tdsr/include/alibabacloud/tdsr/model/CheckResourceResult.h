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

#ifndef ALIBABACLOUD_TDSR_MODEL_CHECKRESOURCERESULT_H_
#define ALIBABACLOUD_TDSR_MODEL_CHECKRESOURCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/tdsr/TdsrExport.h>

namespace AlibabaCloud
{
	namespace Tdsr
	{
		namespace Model
		{
			class ALIBABACLOUD_TDSR_EXPORT CheckResourceResult : public ServiceResult
			{
			public:


				CheckResourceResult();
				explicit CheckResourceResult(const std::string &payload);
				~CheckResourceResult();
				std::string getGmtWakeup()const;
				long getHid()const;
				std::string getTaskIdentifier()const;
				std::string getMessage()const;
				bool getInterrupt()const;
				bool getSuccess()const;
				std::string getUrl()const;
				std::string getInvoker()const;
				std::string getTaskExtraData()const;
				std::string getCountry()const;
				long getLevel()const;
				std::string getPrompt()const;
				std::string getPk()const;
				std::string getBid()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string gmtWakeup_;
				long hid_;
				std::string taskIdentifier_;
				std::string message_;
				bool interrupt_;
				bool success_;
				std::string url_;
				std::string invoker_;
				std::string taskExtraData_;
				std::string country_;
				long level_;
				std::string prompt_;
				std::string pk_;
				std::string bid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TDSR_MODEL_CHECKRESOURCERESULT_H_