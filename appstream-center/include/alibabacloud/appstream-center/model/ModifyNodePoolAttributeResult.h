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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_MODIFYNODEPOOLATTRIBUTERESULT_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_MODIFYNODEPOOLATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/appstream-center/Appstream_centerExport.h>

namespace AlibabaCloud
{
	namespace Appstream_center
	{
		namespace Model
		{
			class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT ModifyNodePoolAttributeResult : public ServiceResult
			{
			public:


				ModifyNodePoolAttributeResult();
				explicit ModifyNodePoolAttributeResult(const std::string &payload);
				~ModifyNodePoolAttributeResult();
				std::string getMessage()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_MODIFYNODEPOOLATTRIBUTERESULT_H_