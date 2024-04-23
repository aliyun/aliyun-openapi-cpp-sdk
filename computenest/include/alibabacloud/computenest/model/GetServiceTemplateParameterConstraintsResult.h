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

#ifndef ALIBABACLOUD_COMPUTENEST_MODEL_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESULT_H_
#define ALIBABACLOUD_COMPUTENEST_MODEL_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/computenest/ComputeNestExport.h>

namespace AlibabaCloud
{
	namespace ComputeNest
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPUTENEST_EXPORT GetServiceTemplateParameterConstraintsResult : public ServiceResult
			{
			public:
				struct ParameterConstraintsItem
				{
					struct OriginalConstraintsItem
					{
						std::string propertyName;
						std::string resourceName;
						std::vector<std::string> allowedValues1;
						std::string resourceType;
					};
					struct QueryErrorsItem
					{
						std::string resourceName;
						std::string resourceType;
						std::string errorMessage;
					};
					std::string type;
					std::vector<std::string> allowedValues;
					std::string behaviorReason;
					std::vector<std::string> associationParameterNames;
					std::vector<ParameterConstraintsItem::OriginalConstraintsItem> originalConstraints;
					std::string behavior;
					std::vector<ParameterConstraintsItem::QueryErrorsItem> queryErrors;
					std::string parameterKey;
				};


				GetServiceTemplateParameterConstraintsResult();
				explicit GetServiceTemplateParameterConstraintsResult(const std::string &payload);
				~GetServiceTemplateParameterConstraintsResult();
				std::vector<ParameterConstraintsItem> getParameterConstraints()const;
				std::vector<std::string> getFamilyConstraints()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ParameterConstraintsItem> parameterConstraints_;
				std::vector<std::string> familyConstraints_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENEST_MODEL_GETSERVICETEMPLATEPARAMETERCONSTRAINTSRESULT_H_