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

#ifndef ALIBABACLOUD_FT_MODEL_BATCHAUDITTEST01REQUEST_H_
#define ALIBABACLOUD_FT_MODEL_BATCHAUDITTEST01REQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT BatchAuditTest01Request : public RpcServiceRequest
			{

			public:
				BatchAuditTest01Request();
				~BatchAuditTest01Request();

				std::string getDemo01()const;
				void setDemo01(const std::string& demo01);
				bool getTest010101()const;
				void setTest010101(bool test010101);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getBatchAuditTest01()const;
				void setBatchAuditTest01(const std::string& batchAuditTest01);

            private:
				std::string demo01_;
				bool test010101_;
				std::string name_;
				std::string batchAuditTest01_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_BATCHAUDITTEST01REQUEST_H_