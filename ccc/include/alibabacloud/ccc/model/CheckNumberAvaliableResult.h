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

#ifndef ALIBABACLOUD_CCC_MODEL_CHECKNUMBERAVALIABLERESULT_H_
#define ALIBABACLOUD_CCC_MODEL_CHECKNUMBERAVALIABLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT CheckNumberAvaliableResult : public ServiceResult
			{
			public:
				struct CallerAvaliable
				{
					bool avaliable;
					std::string reason;
				};
				struct CalleeAvaliable
				{
					bool avaliable;
					std::string reason;
				};


				CheckNumberAvaliableResult();
				explicit CheckNumberAvaliableResult(const std::string &payload);
				~CheckNumberAvaliableResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				CallerAvaliable getCallerAvaliable()const;
				std::string getCode()const;
				bool getSuccess()const;
				CalleeAvaliable getCalleeAvaliable()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				CallerAvaliable callerAvaliable_;
				std::string code_;
				bool success_;
				CalleeAvaliable calleeAvaliable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_CHECKNUMBERAVALIABLERESULT_H_