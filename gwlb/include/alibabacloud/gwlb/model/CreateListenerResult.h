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

#ifndef ALIBABACLOUD_GWLB_MODEL_CREATELISTENERRESULT_H_
#define ALIBABACLOUD_GWLB_MODEL_CREATELISTENERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gwlb/GwlbExport.h>

namespace AlibabaCloud
{
	namespace Gwlb
	{
		namespace Model
		{
			class ALIBABACLOUD_GWLB_EXPORT CreateListenerResult : public ServiceResult
			{
			public:


				CreateListenerResult();
				explicit CreateListenerResult(const std::string &payload);
				~CreateListenerResult();
				std::string getListenerId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string listenerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GWLB_MODEL_CREATELISTENERRESULT_H_