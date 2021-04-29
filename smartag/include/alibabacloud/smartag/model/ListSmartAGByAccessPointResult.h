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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_LISTSMARTAGBYACCESSPOINTRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_LISTSMARTAGBYACCESSPOINTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT ListSmartAGByAccessPointResult : public ServiceResult
			{
			public:
				struct SmartAccessGateway
				{
					std::string smartAGName;
					std::string smartAGStatus;
					std::string routingStrategy;
					std::string associatedCcnId;
					std::string smartAGId;
					std::string hardwareVersion;
					std::string smartAGDescription;
				};


				ListSmartAGByAccessPointResult();
				explicit ListSmartAGByAccessPointResult(const std::string &payload);
				~ListSmartAGByAccessPointResult();
				int getTotalCount()const;
				std::vector<SmartAccessGateway> getSmartAccessGateways()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<SmartAccessGateway> smartAccessGateways_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_LISTSMARTAGBYACCESSPOINTRESULT_H_